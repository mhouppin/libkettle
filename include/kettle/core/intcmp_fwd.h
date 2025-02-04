// RESERVED FOR INTERNAL USE ONLY. Do not include this file directly.

// Returns the maximum of the two values.
KETTLE_VALUE u8 u8_max(u8 lhs, u8 rhs) {
    return lhs > rhs ? lhs : rhs;
}

// Returns the maximum of the two values.
KETTLE_VALUE u16 u16_max(u16 lhs, u16 rhs) {
    return lhs > rhs ? lhs : rhs;
}

// Returns the maximum of the two values.
KETTLE_VALUE u32 u32_max(u32 lhs, u32 rhs) {
    return lhs > rhs ? lhs : rhs;
}

// Returns the maximum of the two values.
KETTLE_VALUE u64 u64_max(u64 lhs, u64 rhs) {
    return lhs > rhs ? lhs : rhs;
}

// Returns the maximum of the two values.
KETTLE_VALUE usize usize_max(usize lhs, usize rhs) {
    return lhs > rhs ? lhs : rhs;
}

// Returns the maximum of the two values.
KETTLE_VALUE i8 i8_max(i8 lhs, i8 rhs) {
    return lhs > rhs ? lhs : rhs;
}

// Returns the maximum of the two values.
KETTLE_VALUE i16 i16_max(i16 lhs, i16 rhs) {
    return lhs > rhs ? lhs : rhs;
}

// Returns the maximum of the two values.
KETTLE_VALUE i32 i32_max(i32 lhs, i32 rhs) {
    return lhs > rhs ? lhs : rhs;
}

// Returns the maximum of the two values.
KETTLE_VALUE i64 i64_max(i64 lhs, i64 rhs) {
    return lhs > rhs ? lhs : rhs;
}

// Returns the maximum of the two values.
KETTLE_VALUE isize isize_max(isize lhs, isize rhs) {
    return lhs > rhs ? lhs : rhs;
}

// Returns the maximum of the two values.
KETTLE_VALUE u8 u8_min(u8 lhs, u8 rhs) {
    return lhs > rhs ? rhs : lhs;
}

// Returns the minimum of the two values.
KETTLE_VALUE u16 u16_min(u16 lhs, u16 rhs) {
    return lhs > rhs ? rhs : lhs;
}

// Returns the minimum of the two values.
KETTLE_VALUE u32 u32_min(u32 lhs, u32 rhs) {
    return lhs > rhs ? rhs : lhs;
}

// Returns the minimum of the two values.
KETTLE_VALUE u64 u64_min(u64 lhs, u64 rhs) {
    return lhs > rhs ? rhs : lhs;
}

// Returns the minimum of the two values.
KETTLE_VALUE usize usize_min(usize lhs, usize rhs) {
    return lhs > rhs ? rhs : lhs;
}

// Returns the minimum of the two values.
KETTLE_VALUE i8 i8_min(i8 lhs, i8 rhs) {
    return lhs > rhs ? rhs : lhs;
}

// Returns the minimum of the two values.
KETTLE_VALUE i16 i16_min(i16 lhs, i16 rhs) {
    return lhs > rhs ? rhs : lhs;
}

// Returns the minimum of the two values.
KETTLE_VALUE i32 i32_min(i32 lhs, i32 rhs) {
    return lhs > rhs ? rhs : lhs;
}

// Returns the minimum of the two values.
KETTLE_VALUE i64 i64_min(i64 lhs, i64 rhs) {
    return lhs > rhs ? rhs : lhs;
}

// Returns the minimum of the two values.
KETTLE_VALUE isize isize_min(isize lhs, isize rhs) {
    return lhs > rhs ? rhs : lhs;
}

// Clamps the value between the provided bounds.
KETTLE_VALUE u8 u8_clamp(u8 value, u8 lbound, u8 ubound) {
    return lbound > value ? lbound : value > ubound ? ubound : value;
}

// Clamps the value between the provided bounds.
KETTLE_VALUE u16 u16_clamp(u16 value, u16 lbound, u16 ubound) {
    return lbound > value ? lbound : value > ubound ? ubound : value;
}

// Clamps the value between the provided bounds.
KETTLE_VALUE u32 u32_clamp(u32 value, u32 lbound, u32 ubound) {
    return lbound > value ? lbound : value > ubound ? ubound : value;
}

// Clamps the value between the provided bounds.
KETTLE_VALUE u64 u64_clamp(u64 value, u64 lbound, u64 ubound) {
    return lbound > value ? lbound : value > ubound ? ubound : value;
}

// Clamps the value between the provided bounds.
KETTLE_VALUE usize usize_clamp(usize value, usize lbound, usize ubound) {
    return lbound > value ? lbound : value > ubound ? ubound : value;
}

// Clamps the value between the provided bounds.
KETTLE_VALUE i8 i8_clamp(i8 value, i8 lbound, i8 ubound) {
    return lbound > value ? lbound : value > ubound ? ubound : value;
}

// Clamps the value between the provided bounds.
KETTLE_VALUE i16 i16_clamp(i16 value, i16 lbound, i16 ubound) {
    return lbound > value ? lbound : value > ubound ? ubound : value;
}

// Clamps the value between the provided bounds.
KETTLE_VALUE i32 i32_clamp(i32 value, i32 lbound, i32 ubound) {
    return lbound > value ? lbound : value > ubound ? ubound : value;
}

// Clamps the value between the provided bounds.
KETTLE_VALUE i64 i64_clamp(i64 value, i64 lbound, i64 ubound) {
    return lbound > value ? lbound : value > ubound ? ubound : value;
}

// Clamps the value between the provided bounds.
KETTLE_VALUE isize isize_clamp(isize value, isize lbound, isize ubound) {
    return lbound > value ? lbound : value > ubound ? ubound : value;
}

#ifdef KETTLE_HAS_INT128

// Returns the maximum of the two values.
KETTLE_VALUE u128 u128_max(u128 lhs, u128 rhs) {
    return lhs > rhs ? lhs : rhs;
}

// Returns the minimum of the two values.
KETTLE_VALUE u128 u128_min(u128 lhs, u128 rhs) {
    return lhs > rhs ? rhs : lhs;
}

// Clamps the value between the provided bounds.
KETTLE_VALUE u128 u128_clamp(u128 value, u128 lbound, u128 ubound) {
    return lbound > value ? lbound : value > ubound ? ubound : value;
}

// Returns the maximum of the two values.
KETTLE_VALUE i128 i128_max(i128 lhs, i128 rhs) {
    return lhs > rhs ? lhs : rhs;
}

// Returns the minimum of the two values.
KETTLE_VALUE i128 i128_min(i128 lhs, i128 rhs) {
    return lhs > rhs ? rhs : lhs;
}

// Clamps the value between the provided bounds.
KETTLE_VALUE i128 i128_clamp(i128 value, i128 lbound, i128 ubound) {
    return lbound > value ? lbound : value > ubound ? ubound : value;
}

#endif
