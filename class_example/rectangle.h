#pragma once

namespace Shapes {
    class Rectangle {
        public:
            Rectangle();
            Rectangle(int x0, int y0, int x1, int y1);
            ~Rectangle();
            int GetArea();
            void Move(int dx, int dy);
        private:
            int x0_, y0_, x1_, y1_;
    };
}

