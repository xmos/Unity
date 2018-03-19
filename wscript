def use_module(bld):
    sources = bld.path.ant_glob('src/*.c')
    bld.env.MODULE_XCC_FLAGS = bld.env.XCC_FLAGS + ['-Os']
    bld.module(
        source=sources,
        includes='src',
        version='2.4.3')
