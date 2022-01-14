class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        const unsigned short length = (unsigned short)s.size();

        if(length)
        {
            if(length == 1)
                return 1;
            else if(length == 2)
            {
                if(s[0] == s[1])
                    return 1;
                else
                    return 2;
            }
            else
            {
                unsigned short result = 1;
                unsigned short i = 0, j = 1;
                string str = {s[i]};

                while(j < length)
                {
                    if(str.find(s[j]) == str.npos)
                    {
                        str += s[j];
                        j++;
                    }
                    else
                    {
                        result = max((unsigned short)(j - i), result);
                        str = s[++i];
                        j = (unsigned short)(i + 1);
                    }
                }

                result = max((unsigned short)(j - i), result);

                return result;
            }
        }
        else
            return 0;
};
