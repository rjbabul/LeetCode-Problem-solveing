
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
    int distance (int a, int b)
    {
        return abs(a-b);
    }
    int Area(Rectengle *rect)
    {
        return distance(rect->x1, rect->x2)* distance(rect->y1, rect->y2);
    }

    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        Rectengle *r1= new Rectengle();
        Rectengle *r2 = new Rectengle();
        r1->x1=ax1;
        r1->y1=ay1;
        r1->x2= ax2;
        r1->y2= ay2;

        r2->x1=bx1;
        r2->y1=by1;
        r2->x2= bx2;
        r2->y2= by2;
        int area1 , area2;
        area1 = Area(r1);
        area2 = Area(r2);

        bool isIntersect= isInterSect(r1, r2) || isInterSect(r2, r1);
        if(!isIntersect) return area1+ area2;


        Rectengle *cRect=new Rectengle() ;
        cRect->x1 = max(r1->x1, r2->x1);
        cRect->x2 = min(r1->x2, r2->x2);
        cRect->y1=  max(r1->y1, r2->y1);
        cRect->y2=  min(r1->y2, r2->y2);
        int CommonArea = Area(cRect);

        return area1+area2 - CommonArea;
    }
};
