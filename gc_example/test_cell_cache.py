import cell_cache
from cell_cache import cell_save, cell_load

if __name__ == '__main__':
    # We should remember, that we save all args as tuple!
    cell_save(1)
    assert((1,) == cell_load())
    assert((1,) == cell_load())

    cell_save(1,2,3,4)
    assert((1,2,3,4) == cell_load())

