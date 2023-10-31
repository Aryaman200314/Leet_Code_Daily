class Solution {
public:
    string addBinary(string a, string b) {
    int al = a.length();
    int bl = b.length();
    int carry = 0, i = 0 ; 
    string ans = "";
    while(i<al || i<bl || carry!=0)
    {
        int x = 0;
        if(i<al && a[al-1-i]=='1')
        {
            x =1;
        }
        int y= 0;
         if(i<bl && b[bl-1-i]=='1')
        {
            y=1;
        }
        ans = to_string((x+y+carry)%2) + ans; //yha pai + ans ka mtlb hai kjo bhi value ye ans sai phele wali   rquation solve krke aayi gyi usmai uske sath sdd krna hai kyuki string hai 

        //upar % number ka remainder return kr rha hai jo add krne pai aaye ga 2 binary numbers ko

        carry = (x+y+carry)/2;
        i = i + 1;
    }
    return ans;

    }
};