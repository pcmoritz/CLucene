#if __cplusplus
extern "C"
{
#endif  // __cplusplus

typedef struct LuceneWriteContext LuceneWriteContext;

LuceneWriteContext* LuceneCreateWriteContext(const char* indexDirectory);

void LuceneIndexDocs(LuceneWriteContext* context, const char* sourceDirectory);

void LuceneOptimizeIndex(LuceneWriteContext* context);

void LuceneDeleteWriteContext(LuceneWriteContext* context);

typedef struct LuceneReadContext LuceneReadContext;

LuceneReadContext* LuceneCreateReadContext(const char* indexDirectory);

void LuceneQuery(LuceneReadContext* context, const char* field, const char* search_query);

void LuceneDeleteReadContext(LuceneReadContext* context);

#if __cplusplus
}
#endif  // __cplusplus
