#if __cplusplus
extern "C"
{
#endif  // __cplusplus

typedef struct LuceneContext LuceneContext;

LuceneContext* LuceneCreateContext(const char* indexDirectory);

void LuceneIndexDocs(LuceneContext* context, const char* sourceDirectory);

void LuceneDeleteContext(LuceneContext* context);

#if __cplusplus
}
#endif  // __cplusplus
