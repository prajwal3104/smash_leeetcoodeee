class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int> p;
        int n = heights.size();
    
        int help = 0, i; 
        for(i=0; i < n-1; i++){ 
            
            help = heights[i+1] - heights[i];
            
            if(help <= 0){
                continue;
            }

            bricks -= help; 
            p.push(help); 
       
            if(bricks < 0){
                bricks += p.top(); 
                p.pop(); 
                ladders--;
            }

          
            if(ladders < 0) break;
        }
        
        
        return i;
    }
};
