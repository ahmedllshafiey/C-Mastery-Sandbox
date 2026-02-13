#include <stdbool.h> // bool type (true/false)
#include <stdint.h>  // fixed-width integer types (int32_t, uint64_t, etc.)
#include <stdio.h>   // printf
#include <stdlib.h>  // malloc, free

// -----------------------------------------------------------------------------
// Type aliases (short names for fixed-width integer types)
// -----------------------------------------------------------------------------
typedef int8_t i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;

typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

typedef float f32;
typedef double f64;

// -----------------------------------------------------------------------------
// Useful macros
// -----------------------------------------------------------------------------

// NOTE: macro constants should NOT end with semicolons
#define PI 3.14f

// Macro for minimum of two values
#define MIN(a, b) ((a) < (b) ? (a) : (b))

// -----------------------------------------------------------------------------
// A simple 2D vector type using floats
// -----------------------------------------------------------------------------
typedef struct {
  f32 x;
  f32 y;
} vec2f;

// -----------------------------------------------------------------------------
// A "tagged union" shape type
// kind tells us which union member is currently valid
// -----------------------------------------------------------------------------
typedef struct {
  enum { SHAPE_CIRCLE, SHAPE_TRIANGLE, SHAPE_SQUARE } kind;

  union {
    struct {
      f32 s;
    } square; // square side length
    struct {
      f32 r;
    } circle; // circle radius
    struct {
      f32 b, h;
    } triangle; // triangle base and height
  } contents;

} shape;

// Function prototype
void foo(void);

int main(void) {
  // ---------------------------------------------------------------------------
  // Basic boolean and struct usage
  // ---------------------------------------------------------------------------
  bool isGood = true;
  (void)isGood; // suppress unused variable warning (optional)

  vec2f v = {1.0f, 2.5f};
  printf("Vector = < %f, %f>\n", v.x, v.y);

  // ---------------------------------------------------------------------------
  // Pointer basics
  // ---------------------------------------------------------------------------
  i32 x = 132;
  i32 *px = &x;

  printf("x = %d, address of x = %p\n", x, (void *)px);

  // Modifying x through the pointer
  *px = 550;
  printf("x = %d, address of x = %p\n", x, (void *)px);

  // Pointer to a struct and using -> operator
  vec2f *pv = &v;
  printf("pv->x = %f, pv = %p\n", pv->x, (void *)pv);

  // ---------------------------------------------------------------------------
  // Arrays and indexing
  // ---------------------------------------------------------------------------
  i32 nums[] = {1, 2, 3, 4, 5, 6};

  printf("Original nums: ");
  for (int i = 0; i < 6; i++) {
    printf("%d ", nums[i]);
  }
  printf("\n");

  // ---------------------------------------------------------------------------
  // Arrays and pointer arithmetic
  // nums decays to a pointer to the first element
  // ---------------------------------------------------------------------------
  *nums = 6;       // nums[0] = 6
  *(nums + 1) = 8; // nums[1] = 8

  printf("Modified nums: ");
  for (int i = 0; i < 6; i++) {
    printf("%d ", nums[i]);
  }
  printf("\n");

  // Call a simple function
  foo();

  // ---------------------------------------------------------------------------
  // Dynamic memory allocation (heap)
  // ---------------------------------------------------------------------------
  i32 num_vec = 1000;

  // Allocate an array of 1000 vec2f structures
  vec2f *vectors = malloc(sizeof(vec2f) * (size_t)num_vec);

  // Always check malloc result before using it
  if (!vectors) {
    fprintf(stderr, "malloc failed!\n");
    return 1;
  }

  // Fill the vector array
  for (u32 i = 0; i < (u32)num_vec; i++) {
    vectors[i].x = (f32)i * 1.0f;
    vectors[i].y = (f32)i * 2.0f;
  }

  // Free allocated memory once done
  free(vectors);

  // ---------------------------------------------------------------------------
  // Tagged union usage example
  // ---------------------------------------------------------------------------
  shape s = {.kind = SHAPE_CIRCLE, .contents.circle = {.r = 123.0f}};

  // (Optional) use the shape to avoid unused warning
  if (s.kind == SHAPE_CIRCLE) {
    printf("Circle radius = %f\n", s.contents.circle.r);
  }

  return 0;
}

void foo(void) { printf("Hello\n"); }