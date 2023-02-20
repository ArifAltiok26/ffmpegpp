#pragma once
#include "avcodec_context_policies.h"

struct AVPacket;
struct AVFrame;

namespace ygv
{

struct DecoderContextPolicies : AVCodecContextPolicies
{
    using AVCodecContextPolicies::execute;

    static int execute(AVCodecContext *context, const Write &, AVPacket *packet);

    static int execute(AVCodecContext *context, const Read &, AVFrame *frame);

    static int execute(AVCodecContext *context, const Open &, const AVCodecParameters *params,
                       AVDictionary **options = nullptr);
};

} // namespace ygv