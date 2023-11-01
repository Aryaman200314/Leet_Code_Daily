class Solution {
public:
    int addDigits(int num) {
      int digitSum = 0;
   if(num<10)
   {
       return num;
   }
   while(num)
   {
       digitSum +=  num%10;
       num /= 10;
   }
   return addDigits(digitSum);
}
};