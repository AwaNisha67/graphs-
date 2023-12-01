#include<stdio.h>
#define n 10 //highest number of vertices or edges
void addEdge(int adjmatrice[][n],int vert1,int vert2){
    adjmatrice[vert1][vert2]=1;
    adjmatrice[vert2][vert1]=1;
}
void print(int adjmatrice[][n],int vertices){
    for(int i=0;i<vertices;i++){
        for(int j=0;j<vertices;j++){
            printf("%d ",adjmatrice[i][j]);
        }
        printf("\n");
    }
}
void main(){
    int vertices,edges,vert1,vert2;
    printf("Enter the Total number of vertices: ");
    scanf("%d",&vertices);
    printf("Enter the Total number of edges: ");
    scanf("%d",&edges);
    
    int adjmatrice[n][n] = {0};
    
    //int adjmatrice[edges][edges]={0};
    //this wont work because we're trying to initialize a variable-length array (VLA) with a size that's not known at compile time. 
    //to use edges we have to use loop to initialize the elements with 0
    /* for(i=0;i<edges;i++){
          for(j=0;j<edges;j++){
              adjmatrice[i][j]=0;
          }
    }*/
    for(int i=0;i < edges;i++){
        printf("Enter the connected vertices of edge %d(seprated by space)",i+1);
        scanf("%d %d",&vert1,&vert2);
        
        addEdge(adjmatrice,vert1,vert2);
        
    }
    print(adjmatrice,vertices);
}
