/*প্রব্লেম টা হচ্ছে তরমুজ টা কে এমন ভাবে ২ ভাগ করা লাগবে যাতে ওইটার ওজনের দুইভাগই জোড় সংখ্যা হয়। 
ধর ১২ কেজি ওজন এইটা কে ৮+৪ এই দুইভাগ করা যায় ।ভাগ করার সময় ওজন টা সমান হওয়ার দরকার নাই 
জাস্ট দুইভাগের প্রত্যেক ভাগের ওজন যাতে জোড় হয় । */
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);//তরমুজের ওজন ইনপুট নিলাম
    if(n%2==0)//চ্যাক করতেছি ভাগফল জোড় সংখ্যা কিনা।
    {
     /*এইখানে ইফ এর ভেতর আরেকটা কন্ডিশন দিসি।যদি এন এর মান ২ হয় তাহলে আমরা তরমুজ কে ২ ভাগ করলে পাবো ১ ভাগ করে । ১ আর ১ দুইটাই বিজোড় সংখ্যা তাই 
      আমরা এই জাইগাই নো প্রিন্ট করলাম যদি n=2 হয়।
    */
        if(n==2)
    {
        printf("NO");
    }
    // n=2 না হলে আলস এর কন্ডীশনে ঢুকে ইয়েস প্রিন্ট করবে
    else
    {
        printf("YES");
    }
    }
    //আর যদি দুই ভাগ করে দুইটা ওজন যদি জোড় না পাওয়া যাই তাইলে নো প্রিন্ট করবে।
    else 
    {
        printf("NO");
    }
    return 0;
}