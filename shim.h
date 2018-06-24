#if __cplusplus
extern "C"
{
#endif  // __cplusplus

typedef struct LuceneContext LuceneContext;

LuceneContext* LuceneCreateContext(const char* indexDirectory);

// void buff_deinit( buff* _this );
// buff* buff_init( int type, double amount, double max_amount, double start_angle, double relative_angle, double max_distance, double bleedthrough, bool permanent );
// int buff_get_type( buff* _this );

#if __cplusplus
}
#endif  // __cplusplus
