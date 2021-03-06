#include <stddef.h>
#include <stdint.h>

#if __cplusplus
extern "C"
{
#endif  // __cplusplus

typedef struct LuceneWriteContext LuceneWriteContext;

LuceneWriteContext* LuceneCreateWriteContext(const char* indexDirectory);

void LuceneIndexDocs(LuceneWriteContext* context, const char* sourceDirectory);

void LuceneIndexDoc(LuceneWriteContext* context, uint8_t* data, size_t length);

void LuceneOptimizeIndex(LuceneWriteContext* context);

void LuceneDeleteWriteContext(LuceneWriteContext* context);

typedef struct LuceneReadContext LuceneReadContext;

LuceneReadContext* LuceneCreateReadContext(const char* indexDirectory);

size_t LuceneQuery(LuceneReadContext* context, const char* field, const char* search_query);

size_t LuceneLookup(LuceneReadContext* context, int32_t index);

void LuceneWriteQueryResult(LuceneReadContext* context, uint8_t* data, size_t size);

void LuceneDeleteReadContext(LuceneReadContext* context);

#if __cplusplus
}
#endif  // __cplusplus
