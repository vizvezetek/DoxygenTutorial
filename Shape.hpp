/**
 * \class Shape
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

#ifndef Shape_HPP
#define Shape_HPP

using namespace std;

class Shape{

    protected:
        int width;      ///< the width of the shape
        int height;     ///< the height of the shape
    public:
        /**
         * \brief This is a very userful method.
         * \param none
         * Other desc.
        */
        virtual int const getPerimeter() = 0;

        /// This is a calculated getter function for area.
        virtual int const getArea() = 0;

        /// This is a simple setter funciton for width
        virtual void setWidth(int width_ /** [in] The with param*/) {
            width = width_;
        }

        /// This is a simple setter funciton for height
        virtual void setHeight(int height_ /** [in] The height param*/) {
            height = height_;
        }

        /// This is a destructor
        virtual ~Shape(){}

};


#endif