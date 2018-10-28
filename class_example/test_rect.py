import rect

if __name__ == '__main__':
    rect = rect.PyRectangle(0, 0, 2, 2)
    area = rect.get_area()
    assert(area == 4)
    print('rectangle: (0, 0, 2, 2), area: {}'.format(area))
