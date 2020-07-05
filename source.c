#include<stdio.h>
#include<math.h>
int main ()

{
    int i=0,j=0,c,n,xbb,ybb,m,xb,yb,nb=1,db=4000;

    scanf ("%d",&c);
    for (i=0;i<c;i++)
        {   scanf ("%d",&n);
            scanf ("%d %d",&xbb,&ybb);
            nb=1;db=4000;
            for (j=0;j<n;j++)
            {
              scanf ("%d %d",&xb,&yb);

            m=sqrt(((xb-xbb)*(xb-xbb))+((yb-ybb)*(yb-ybb)));

         if (m < db )
           {
            db=m;
            nb=j+1;
           }

            }

            printf("%d\n",nb);

        }
        return 0;
}
