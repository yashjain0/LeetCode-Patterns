//using upperbound
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        auto begin = letters.begin(), end = letters.end();
        auto iter = upper_bound(begin, end, target);
        return iter != end ? *iter : *begin;
    }
};

//using binary search
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        if (letters.back() <= target) return letters.front();
        int low = 0, high = letters.size() - 1;
        while (low < high) {
            auto mid = (low + high) / 2;
            if (target < letters[mid]) high = mid;
            else low = mid + 1;
        }
        return letters[low];
    }
};

//mine
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int s,e,m,n;
        s=0;
        n=letters.size();
        e=n-1;
        m=(s+e-1)/2;
        while(s<=e)
        {
            //cout<<m<<","<<s<<","<<e<<endl;
            if(letters[m]==target || s==e)
            {
                break;
            }
            else if(letters[m]>target)
            {
                e=m-1;
                m=(s+e)/2;
            }
            else
            {
                s=m+1;
                m=(s+e)/2;
            }
        }
        if(letters[m]>target)
        {return letters[m];}
        else
        {   
            while(letters[m]<=target && m!=(n-1))
            { m=(m+1)%n;}
            cout<<m<<endl;
            if(m==(n-1) and letters[m]<=target)
                return letters[(m+1)%n];
            else
                return letters[m];
        }
        
    }
};
