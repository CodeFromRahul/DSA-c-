#include<stdio.h>

int main()  
{
    int i, NOP, sum=0,count=0, y, quant, wt=0, tat=0, at[10], bt[10], temp[10];  
    float avg_wt, avg_tat;  
    printf("Total number of process in the system: ");  
    scanf("%d", &NOP);  
    y = NOP;

    for(i=0; i<NOP; i++)  
    {  
        at[i] = 0;
        printf("Enter the Burst time of the Process[%d]: ", i);
        scanf("%d", &bt[i]);  
        temp[i] = bt[i];
    }  
     
    printf("Enter the Time Quantum for the process: ");  
    scanf("%d", &quant);  

    printf("\n Process No \t\t Burst Time \t\t TAT \t\t Waiting Time ");  
    for(sum=0, i = 0; y!=0; )  
    {  
        if(temp[i] <= quant && temp[i] > 0)
        {  
            sum = sum + temp[i];  
            temp[i] = 0;  
            count=1;  
        }     
        else if(temp[i] > 0)  
        {  
            temp[i] = temp[i] - quant;  
            sum = sum + quant;    
        }  
        if(temp[i]==0 && count==1)  
        {  
            y--;
            printf("\nProcess No[%d] \t\t %d\t\t\t %d\t\t %d", i, bt[i], sum, sum-bt[i]);  
            wt = wt+sum-bt[i];  
            tat = tat+sum;  
            count =0;     
        }  
        if(i==NOP-1)  
        {  
            i=0;  
        }  
        else if(at[i+1]<=sum)
        {  
            i++;  
        }  
        else  
        {  
            i=0;  
        }  
    }  
    
    avg_wt = wt * 1.0/NOP;  
    avg_tat = tat * 1.0/NOP;  
    printf("\n Average Turn Around Time: \t%f", avg_tat);  
    printf("\n Average Waiting Time: \t%f\n", avg_wt);

    printf("0 ");
    int x = 0, sumx = 0, process_completed=0;
    while (process_completed < NOP)
    {
        for (i = 0; i < NOP; i++)
    {
        if(bt[i]>quant && bt[i] != 0) {
            sumx+=quant;
            printf("p%d %d ", x, sumx);
            bt[i]-=quant;
        } else if(bt[i]!=0) {
            sumx+=bt[i];
            bt[i] = 0;
            printf("p%d %d ", x, sumx);
            process_completed++;
        } if(i == NOP-1) {
            x =-1;
        }
        x++;
    }
    }
    printf("\n");
    
    return 0;
}
