
class Solution {
public:
struct Rectengle
{
  int x1, y1,x2, y2;
};

bool isInterSect(Rectengle *r1, Rectengle *r2)
{
    return !(r1->x2<= r2->x1 || r1->y2<=r2->y1 || r1->x1>=r2->x2 || r1->y1>= r2->y2);
}
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        Rectengle *r1= new Rectengle();
        Rectengle *r2 = new Rectengle();
        r1->x1=rec1[0];
        r1->y1=rec1[1];
        r1->x2= rec1[2];
        r1->y2= rec1[3];

        r2->x1=rec2[0];
        r2->y1=rec2[1];
        r2->x2= rec2[2];
        r2->y2= rec2[3];

        return isInterSect(r1, r2) || isInterSect(r2, r1);
    }
};
