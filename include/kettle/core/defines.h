#ifndef KETTLE_CORE_DEFINES_H
#define KETTLE_CORE_DEFINES_H

// RESERVED FOR INTERNAL USE ONLY. Do not include this file directly.

// Defines used as shorthands for function attributes
#define KETTLE_INLINE static inline
#define KETTLE_NODISCARD __attribute__((warn_unused_result))
#define KETTLE_VALUE KETTLE_INLINE KETTLE_NODISCARD

// Used for deprecating parts of the API when a major version change is not desirable
#define KETTLE_AVOID __attribute__((deprecated))
#define KETTLE_PREFER_FUNC(x) \
    __attribute__((deprecated( \
        "This function is deprecated and will be removed in the future: use" #x "instead." \
    )))

#define KETTLE_STRINGIFY(x) KETTLE_STRINGIFY2(x)
#define KETTLE_STRINGIFY2(x) #x

#endif
