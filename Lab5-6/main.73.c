/* An election is contested by 5 candidates. The candidate is numbered are 1 to 5 
and the voting is done by marking the candidate number on the ballot paper. 
Write a program to read the ballots and count the votes cast for each candidate 
using an array variable count. In case, a number, read is outside the range 1 to 5, 
the ballot should be considered as a ‘spoilt ballot’ and the program should also 
count the number of spoilt ballots*/

#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of ballots");
    scanf("%d",&n);
    int i,a[n];
    for(i=0;i<n;i++)
    {
       printf("enter the ballot [%d]",i+1);
       scanf("%d",&a[i]);
    }
   int candidate_1=0, candidate_2=0,candidate_3=0,candidate_4=0,candidate_5=0,spoilt_ballot=0;
   for(i=0;i<n;i++)
   {
    if (a[i]==1)
    {
        candidate_1 = candidate_1 + 1;
    }
    else if (a[i]==2)
    {
        candidate_2 = candidate_2  + 1;
    }
    else if (a[i]==3)
    {
        candidate_3 = candidate_3 + 1;
    }
    else if (a[i]==4)
    {
        candidate_4 = candidate_4+ 1;
    }
    else if (a[i]==5)
    {
       candidate_5 = candidate_5 + 1;
    }
    else
    {
        spoilt_ballot =spoilt_ballot + 1;
    }
   }

    printf("Candidate 1: %d\n",candidate_1);
    printf("Candidate 2: %d\n",candidate_2);
    printf("Candidate 3: %d\n",candidate_3);
    printf("Candidate 4: %d\n",candidate_4);
    printf("Candidate 5: %d\n",candidate_5);
    printf("Spoilt Ballet: %d",spoilt_ballot);
}