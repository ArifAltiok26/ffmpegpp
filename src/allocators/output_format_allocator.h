#pragma once
struct AVFormatContext;
struct AVOutputFormat;

struct OutputFormatContextAllocator
{
    static AVFormatContext *allocate();

    static AVFormatContext *allocate(const char *filename);

    static AVFormatContext *allocate(const AVOutputFormat *oformat, const char *format_name, const char *filename);

    static void destroy(AVFormatContext *context);
};