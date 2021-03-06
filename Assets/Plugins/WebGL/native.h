struct Vector3 {
	float x,y,z;
};

typedef void (*callback_v)();
typedef void (*callback_vi)(int32_t a);
typedef void (*callback_vf)(float a);
typedef void (*callback_vs)(const char *a);
typedef void (*callback_vv3)(struct Vector3);
typedef void (*callback_vx)(int32_t,int32_t,struct Vector3,struct Vector3);

typedef int32_t (*callback_I)();
typedef float (*callback_F)();
typedef const char * (*callback_S)();