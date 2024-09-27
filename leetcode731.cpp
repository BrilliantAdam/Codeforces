class MyCalendarTwo {
public:
    
    map<int, int> mp;
    MyCalendarTwo() {  
    }
    bool book(int start, int end) {          
        mp[start]++;      
        mp[end]--;       
        int count = 0;
        
        for(auto x : mp)
        {
            count += x.second;
            
            if(count > 2)
                break;
        }        
        if(count > 2)
        {
            mp[start]--;
            
            mp[end]++;
            
            return false;
        }
        return true;
    }
};
