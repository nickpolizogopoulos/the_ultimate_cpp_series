//
// Created by Nick Polizogopoulos on 19/7/25.
//

#ifndef LENGTH_H
#define LENGTH_H

class Length {
public:
    explicit Length(int value);
    bool operator==(const Length& other) const;
    bool operator==(int other) const;
private:
    int value;
};

#endif //LENGTH_H
