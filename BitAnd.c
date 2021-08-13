/* BitAnd
 * Legal operations ~ |
 * 
 * @Prerna(1910990964)
 *
 */

#include<stdio.h>

int bitAnd(int x, int y) {
    int ans = (~x) | (~y);
    ans = ~ans;
    return ans;
}

int main() {
    int x, y;
    scanf("%d%d",&x,&y);
    printf("%d",bitAnd(x,y));
}
