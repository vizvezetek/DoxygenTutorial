/**
 * \class Rectangle
 *
 * \ingroup Exmaple package
 * 
 * \brief Shape class
 * 
 * This is a longer description....This is a longer description....This is a longer description....This is a longer description....This is a longer description....
 * 
 * \note This is a note for shape
 * 
 * \author kope
 * 
 * \version 6.9
 * 
 * \date 2020/10/03 22:07
 * 
 * Created on: 2020/10/03 22:07
*/

#ifndef Rectangle_HPP
#define Rectangle_HPP


#include "Shape.hpp"

class Rectangle: virtual public Shape{

  public:

    /// Rectangle construct, what puts the input parameters to the data members
    Rectangle(int width_, int height_);

    /** \brief Get Area of the Rectangle
      * \param none
      * \return the calculated Area of shape
      * 
      * This method is very very very important.
    */
    virtual int const getArea();

    /**
     * \brief Get Perimeter of the Rectangle
     * \param none
     * \return the calculated Area of shape
     * 
     * This method is also very important.
    */
    virtual int const getPerimeter( /**< [in] Here you CAN'T find any parameter. */ );

};

#endif