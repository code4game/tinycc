#ifndef ANDROID_UCONTEXT_H
#define ANDROID_UCONTEXT_H

// reference https://code.google.com/p/v8/source/detail?r=12250

typedef struct sigcontext mcontext_t;
typedef struct ucontext {
    uint32_t uc_flags;
    struct ucontext* uc_link;
    stack_t uc_stack;
    mcontext_t uc_mcontext;
} ucontext_t;

#endif // ANDROID_UCONTEXT_H

