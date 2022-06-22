class Solution
{
public:
    bool isPalindrome(string s)
    {

        string str = "";
        for (char chr : s)
        {
            if (isalnum(chr))
            {
                str += tolower(chr);
            }
        }

        int low = 0;
        int high = str.length() - 1;

        while (low <= high)
        {
            if (str[low] != str[high])
            {
                return false;
            }
            low++;
            high--;
        }

        return true;
    }
};