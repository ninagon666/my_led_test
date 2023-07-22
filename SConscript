from building import *
Import('rtconfig')

src   = []
cwd   = GetCurrentDir()

# add littled src files.
if GetDepend('PKG_USING_MY_LED_TEST'):
    src += Glob('src/my_led_test.c')

# add littled include path.
path  = [cwd + '/inc']

# add src and include to group.
group = DefineGroup('my_led_test', src, depend = ['PKG_USING_MY_LED_TEST'], CPPPATH = path)

Return('group')