#ifndef KET_H_INCLUDED
#define KET_H_INCLUDED

class Ket {
private:
    int ketAffection;
public:
    Ket();
    void ketAddAffection();
    int getKetAffection();
    void setKetAffection(int affection);
};


#endif // KET_H_INCLUDED
