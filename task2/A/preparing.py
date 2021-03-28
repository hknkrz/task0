import sys
with open(F"{sys.path[0]}/index.h", "w") as F:
	F.write("#pragma once\n\
int production(int var_1,int var_2){\n\
return var_1*var_2;\n\
}")
	
