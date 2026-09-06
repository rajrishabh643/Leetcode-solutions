class Solution {
public:
    void removeSpaces(string &s) {
        // starting spaces
        int i = 0;
        while (s[i] == ' ') {
            s.erase(i, 1);
        }

        // ending spaces
        int j = s.size() - 1;
        while (s[j] == ' ') {
            s.erase(j, 1);
            j = s.size() - 1;
        }

        // between spaces
        int read = 0;
        int write = 0;
        while (read < s.size()) {
            while (read < s.size() && s[read] != ' ') {
                s[write] = s[read];
                read++;
                write++;
            }

            while (read < s.size() && s[read] == ' ') {
                read++;
            }
            if (read < s.size())
                s[write++] = ' ';
        }
        s.resize(write);
    }

    void reverse(string &s,int start,int end){
        int i = start;
        int j = end - 1;

        while(i < j){
            swap(s[i],s[j]);
            i++;
            j--;
        }
    }

    string reverseWords(string s) {
        removeSpaces(s);
        reverse(s,0,s.size());

        int start = 0;
        int end = 0;

        for(int i = 0; i < s.size(); i++){
            if(s[i] == ' '|| i == (s.size()-1)){
                end = i;
                
                if(i == (s.size()-1)) {
                    reverse(s,start, end + 1);
                }else{
                    reverse(s,start,end);
                }
                start = i + 1;
            }
        }
        return s;

    }
};