#ifndef wkeJsBind_h
#define wkeJsBind_h

#include "wke/wkeJsBindFreeTempObject.h"

namespace blink {
class WebLocalFrame;
}

namespace content {
class WebFrameClientImpl;
}

namespace wke {

void onCreateGlobalObject(content::WebFrameClientImpl* client, blink::WebLocalFrame* frame, v8::Local<v8::Context> context, int extensionGroup, int worldId);
void onReleaseGlobalObject(content::WebFrameClientImpl* client, blink::WebLocalFrame* frame, v8::Local<v8::Context> context, int worldId);
jsExecState createTempExecStateByV8Context(v8::Local<v8::Context> context);

}

#endif // wkeJsBind_h