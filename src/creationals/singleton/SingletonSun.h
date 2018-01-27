/* 
 * File:   Sun.h
 * Author: leovolpatto
 *
 * Created on January 27, 2018, 12:32 PM
 */

#ifndef SUN_H
#define SUN_H

class SingletonSun {
public:
    SingletonSun(const SingletonSun& orig);\
    virtual ~SingletonSun();
    
    static SingletonSun* getInstance();
    
    void Show();
    void Hide();
private:
    SingletonSun();
};

#endif /* SUN_H */

