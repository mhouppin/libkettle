// RESERVED FOR INTERNAL USE ONLY. Do not include this file directly.

// Returns the absolute value of self.
// Calling this function with the MIN value will abort the program in debug mode, and return the MIN
// value itself otherwise. If you do not want this behavior, call the unsigned_abs() function instead.
KETTLE_VALUE i8 i8_abs(i8 self) {
    assert(self != I8_MIN);
    return self < 0 ? -self : self;
}

// Returns the absolute value of self as an unsigned integer.
KETTLE_VALUE u8 i8_unsigned_abs(i8 self) {
    return self < 0 ? -(u8)self : (u8)self;
}

// Returns the absolute value of self.
// Calling this function with the MIN value will abort the program in debug mode, and return the MIN
// value itself otherwise. If you do not want this behavior, call the unsigned_abs() function instead.
KETTLE_VALUE i16 i16_abs(i16 self) {
    assert(self != I16_MIN);
    return self < 0 ? -self : self;
}

// Returns the absolute value of self as an unsigned integer.
KETTLE_VALUE u16 i16_unsigned_abs(i16 self) {
    return self < 0 ? -(u16)self : (u16)self;
}

// Returns the absolute value of self.
// Calling this function with the MIN value will abort the program in debug mode, and return the MIN
// value itself otherwise. If you do not want this behavior, call the unsigned_abs() function instead.
KETTLE_VALUE i32 i32_abs(i32 self) {
    assert(self != I32_MIN);
    return self < 0 ? -self : self;
}

// Returns the absolute value of self as an unsigned integer.
KETTLE_VALUE u32 i32_unsigned_abs(i32 self) {
    return self < 0 ? -(u32)self : (u32)self;
}

// Returns the absolute value of self.
// Calling this function with the MIN value will abort the program in debug mode, and return the MIN
// value itself otherwise. If you do not want this behavior, call the unsigned_abs() function instead.
KETTLE_VALUE i64 i64_abs(i64 self) {
    assert(self != I64_MIN);
    return self < 0 ? -self : self;
}

// Returns the absolute value of self as an unsigned integer.
KETTLE_VALUE u64 i64_unsigned_abs(i64 self) {
    return self < 0 ? -(u64)self : (u64)self;
}

// Returns the absolute value of self.
// Calling this function with the MIN value will abort the program in debug mode, and return the MIN
// value itself otherwise. If you do not want this behavior, call the unsigned_abs() function instead.
KETTLE_VALUE isize isize_abs(isize self) {
    assert(self != ISIZE_MIN);
    return self < 0 ? -self : self;
}

// Returns the absolute value of self as an unsigned integer.
KETTLE_VALUE usize isize_unsigned_abs(isize self) {
    return self < 0 ? -(usize)self : (usize)self;
}

#ifdef KETTLE_HAS_INT128

// Returns the absolute value of self.
// Calling this function with the MIN value will abort the program in debug mode, and return the MIN
// value itself otherwise. If you do not want this behavior, call the unsigned_abs() function instead.
KETTLE_VALUE i128 i128_abs(i128 self) {
    assert(self != I128_MIN);
    return self < 0 ? -self : self;
}

// Returns the absolute value of self as an unsigned integer.
KETTLE_VALUE u128 i128_unsigned_abs(i128 self) {
    return self < 0 ? -(u128)self : (u128)self;
}

#endif
