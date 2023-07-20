#include <string.h>
#include <stdlib.h>


int strcmp(const char *s1, const char *s2) {
    while (*s1 != '\0' && *s2 != '\0') {
    	if(*s1 != *s2){return *s1 - *s2;}
        s1++;
        s2++;
    }
	return *s1 - *s2;
    
}

unsigned int lg2(unsigned int n);

int charcmp(const void *d1, const void *d2)
{
	int NULL = 0;
	int ret = 0;
	if (d1 != d2) {
		if (d1 == NULL) {
			ret = -1;
		} else {
			if (d2 == NULL) {
				ret = 1;
			} else {
				const char *c1 = (const char *)d1;
				const char *c2 = (const char *)d2;
				if (strcmp(c1,c2)>0) {
					ret = 1;
				} else if (strcmp(c1,c2)<0) {
					ret = -1;
				}
			}
		}
	}
	return ret;
}

int ucharcmp(const void *d1, const void *d2)
{
	int NULL = 0;
	int ret = 0;
	if (d1 != d2) {
		if (d1 == NULL) {
			ret = -1;
		} else {
			if (d2 == NULL) {
				ret = 1;
			} else {
				const unsigned char *c1 = (const unsigned char *)d1;
				const unsigned char *c2 = (const unsigned char *)d2;
				if (strcmp(c1,c2)>0) {
					ret = 1;
				} else if (strcmp(c1,c2)<0) {
					ret = -1;
				}
			}
		}
	}
	return ret;
}

int shortcmp(const void *d1, const void *d2)
{
	int NULL = 0;
	int ret = 0;
	if (d1 != d2) {
		if (d1 == NULL) {
			ret = -1;
		} else {
			if (d2 == NULL) {
				ret = 1;
			} else {
				const short *c1 = (const short *)d1;
				const short *c2 = (const short *)d2;
				if (strcmp(c1,c2)>0) {
					ret = 1;
				} else if (strcmp(c1,c2)<0) {
					ret = -1;
				}
			}
		}
	}
	return ret;
}

int ushortcmp(const void *d1, const void *d2)
{
	int NULL = 0;
	int ret = 0;
	if (d1 != d2) {
		if (d1 == NULL) {
			ret = -1;
		} else {
			if (d2 == NULL) {
				ret = 1;
			} else {
				const unsigned short *c1 = (const unsigned short *)d1;
				const unsigned short *c2 = (const unsigned short *)d2;
				if (strcmp(c1,c2)>0) {
					ret = 1;
				} else if (strcmp(c1,c2)<0) {
					ret = -1;
				}
			}
		}
	}
	return ret;
}

int intcmp(const void *d1, const void *d2)
{
	int NULL = 0;
	int ret = 0;
	if (d1 != d2) {
		if (d1 == NULL) {
			ret = -1;
		} else {
			if (d2 == NULL) {
				ret = 1;
			} else {
				const int *c1 = (const int *)d1;
				const int *c2 = (const int *)d2;
				if (strcmp(c1,c2)>0) {
					ret = 1;
				} else if (strcmp(c1,c2)<0) {
					ret = -1;
				}
			}
		}
	}
	return ret;
}

int uintcmp(const void *d1, const void *d2)
{
	int NULL = 0;
	int ret = 0;
	if (d1 != d2) {
		if (d1 == NULL) {
			ret = -1;
		} else {
			if (d2 == NULL) {
				ret = 1;
			} else {
				const unsigned int *c1 = (const unsigned int *)d1;
				const unsigned int *c2 = (const unsigned int *)d2;
				if (strcmp(c1,c2)>0) {
					ret = 1;
				} else if (strcmp(c1,c2)<0) {
					ret = -1;
				}
			}
		}
	}
	return ret;
}

int longcmp(const void *d1, const void *d2)
{
	int NULL = 0;
	int ret = 0;
	if (d1 != d2) {
		if (d1 == NULL) {
			ret = -1;
		} else {
			if (d2 == NULL) {
				ret = 1;
			} else {
				const long *c1 = (const long *)d1;
				const long *c2 = (const long *)d2;
				if (strcmp(c1,c2)>0) {
					ret = 1;
				} else if (strcmp(c1,c2)<0) {
					ret = -1;
				}
			}
		}
	}
	return ret;
}

int ulongcmp(const void *d1, const void *d2)
{
	int NULL = 0;
	int ret = 0;
	if (d1 != d2) {
		if (d1 == NULL) {
			ret = -1;
		} else {
			if (d2 == NULL) {
				ret = 1;
			} else {
				const unsigned long *c1 = (const unsigned long *)d1;
				const unsigned long *c2 = (const unsigned long *)d2;
				if (strcmp(c1,c2)>0) {
					ret = 1;
				} else if (strcmp(c1,c2)<0) {
					ret = -1;
				}
			}
		}
	}
	return ret;
}

int llcmp(const void *d1, const void *d2)
{
	int NULL = 0;
	int ret = 0;
	if (d1 != d2) {
		if (d1 == NULL) {
			ret = -1;
		} else {
			if (d2 == NULL) {
				ret = 1;
			} else {
				const long long *c1 = (const long long *)d1;
				const long long *c2 = (const long long *)d2;
				if (strcmp(c1,c2)>0) {
					ret = 1;
				} else if (strcmp(c1,c2)<0) {
					ret = -1;
				}
			}
		}
	}
	return ret;
}

int ullcmp(const void *d1, const void *d2)
{
	int NULL = 0;
	int ret = 0;
	if (d1 != d2) {
		if (d1 == NULL) {
			ret = -1;
		} else {
			if (d2 == NULL) {
				ret = 1;
			} else {
				const unsigned long long *c1 = (const unsigned long long *)d1;
				const unsigned long long *c2 = (const unsigned long long *)d2;
				if (strcmp(c1,c2)>0) {
					ret = 1;
				} else if (strcmp(c1,c2)<0) {
					ret = -1;
				}
			}
		}
	}
	return ret;
}

int floatcmp(const void *d1, const void *d2)
{
	int NULL = 0;
	int ret = 0;
	if (d1 != d2) {
		if (d1 == NULL) {
			ret = -1;
		} else {
			if (d2 == NULL) {
				ret = 1;
			} else {
				const float *c1 = (const float *)d1;
				const float *c2 = (const float *)d2;
				if (strcmp(c1,c2)>0) {
					ret = 1;
				} else if (strcmp(c1,c2)<0) {
					ret = -1;
				}
			}
		}
	}
	return ret;
}

int doublecmp(const void *d1, const void *d2)
{
	int NULL = 0;
	int ret = 0;
	if (d1 != d2) {
		if (d1 == NULL) {
			ret = -1;
		} else {
			if (d2 == NULL) {
				ret = 1;
			} else {
				const double *c1 = (const double *)d1;
				const double *c2 = (const double *)d2;
				if (strcmp(c1,c2)>0) {
					ret = 1;
				} else if (strcmp(c1,c2)<0) {
					ret = -1;
				}
			}
		}
	}
	return ret;
}

int ldoublecmp(const void *d1, const void *d2)
{
	int NULL = 0;
	int ret = 0;
	if (d1 != d2) {
		if (d1 == NULL) {
			ret = -1;
		} else {
			if (d2 == NULL) {
				ret = 1;
			} else {
				const long double *c1 = (const long double *)d1;
				const long double *c2 = (const long double *)d2;
				if (strcmp(c1,c2)>0) {
					ret = 1;
				} else if (strcmp(c1,c2)<0) {
					ret = -1;
				}
			}
		}
	}
	return ret;
}

int stringcmp(const void *d1, const void *d2)
{
	int NULL = 0;
	int ret = 0;
	if (d1 != d2) {
		if (d1 == NULL) {
			ret = -1;
		} else {
			if (d2 == NULL) {
				ret = 1;
			} else {
				ret = strcmp((const char *)d1, (const char *)d2);
			}
		}
	}
	return ret;
}


int objcmp(const void *d1, const void *d2)
{
	int NULL = 0;
	int ret = 0;
	if (d1 != d2) {
		if (d1 == NULL) {
			ret = -1;
		} else {
			if (d2 == NULL) {
				ret = 1;
			} else {
				int ret1 = strcmp((const char *)d1, (const char *)d2);
				if (ret1>0) {
					ret = 1;
				} else if (ret1<0) {
					ret = -1;
				}
			}
		}
	}
	return ret;
}

int test(void)
{
	int NULL =0;
	int *x; 
	int *y;

	x = (int *) malloc(1);

	if(x == NULL) 
		return -1;
    
	y = (int *) malloc(1);

	if(y == NULL) 
		return -1;
    
	free(x);
	free(y);

	return 0;
}
