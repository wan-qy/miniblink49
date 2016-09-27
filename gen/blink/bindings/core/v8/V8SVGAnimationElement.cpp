// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8SVGAnimationElement.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8AbstractEventListener.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8EventListenerList.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8SVGElement.h"
#include "bindings/core/v8/V8SVGStringList.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/frame/UseCounter.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "platform/TraceEvent.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8SVGAnimationElement::wrapperTypeInfo = { gin::kEmbedderBlink, V8SVGAnimationElement::domTemplate, V8SVGAnimationElement::refObject, V8SVGAnimationElement::derefObject, V8SVGAnimationElement::trace, 0, 0, V8SVGAnimationElement::preparePrototypeObject, V8SVGAnimationElement::installConditionallyEnabledProperties, "SVGAnimationElement", &V8SVGElement::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::NodeClassId, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Dependent, WrapperTypeInfo::WillBeGarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SVGAnimationElement.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& SVGAnimationElement::s_wrapperTypeInfo = V8SVGAnimationElement::wrapperTypeInfo;

namespace SVGAnimationElementV8Internal {

static void targetElementAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGAnimationElement* impl = V8SVGAnimationElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->targetElement()), impl);
}

static void targetElementAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    SVGAnimationElementV8Internal::targetElementAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void onbeginAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGAnimationElement* impl = V8SVGAnimationElement::toImpl(holder);
    EventListener* cppValue(impl->onbegin());
    v8SetReturnValue(info, cppValue ? v8::Local<v8::Value>(V8AbstractEventListener::cast(cppValue)->getListenerObject(impl->executionContext())) : v8::Local<v8::Value>(v8::Null(info.GetIsolate())));
}

static void onbeginAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    SVGAnimationElementV8Internal::onbeginAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void onbeginAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGAnimationElement* impl = V8SVGAnimationElement::toImpl(holder);
    impl->setOnbegin(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void onbeginAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    SVGAnimationElementV8Internal::onbeginAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void onendAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGAnimationElement* impl = V8SVGAnimationElement::toImpl(holder);
    EventListener* cppValue(impl->onend());
    v8SetReturnValue(info, cppValue ? v8::Local<v8::Value>(V8AbstractEventListener::cast(cppValue)->getListenerObject(impl->executionContext())) : v8::Local<v8::Value>(v8::Null(info.GetIsolate())));
}

static void onendAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    SVGAnimationElementV8Internal::onendAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void onendAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGAnimationElement* impl = V8SVGAnimationElement::toImpl(holder);
    impl->setOnend(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void onendAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    SVGAnimationElementV8Internal::onendAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void onrepeatAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGAnimationElement* impl = V8SVGAnimationElement::toImpl(holder);
    EventListener* cppValue(impl->onrepeat());
    v8SetReturnValue(info, cppValue ? v8::Local<v8::Value>(V8AbstractEventListener::cast(cppValue)->getListenerObject(impl->executionContext())) : v8::Local<v8::Value>(v8::Null(info.GetIsolate())));
}

static void onrepeatAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    SVGAnimationElementV8Internal::onrepeatAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void onrepeatAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGAnimationElement* impl = V8SVGAnimationElement::toImpl(holder);
    impl->setOnrepeat(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void onrepeatAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    SVGAnimationElementV8Internal::onrepeatAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void requiredFeaturesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGAnimationElement* impl = V8SVGAnimationElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->requiredFeatures()), impl);
}

static void requiredFeaturesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::SVG1DOM);
    SVGAnimationElementV8Internal::requiredFeaturesAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void requiredExtensionsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGAnimationElement* impl = V8SVGAnimationElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->requiredExtensions()), impl);
}

static void requiredExtensionsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::SVG1DOM);
    SVGAnimationElementV8Internal::requiredExtensionsAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void systemLanguageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGAnimationElement* impl = V8SVGAnimationElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->systemLanguage()), impl);
}

static void systemLanguageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::SVG1DOM);
    SVGAnimationElementV8Internal::systemLanguageAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void getStartTimeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "getStartTime", "SVGAnimationElement", info.Holder(), info.GetIsolate());
    SVGAnimationElement* impl = V8SVGAnimationElement::toImpl(info.Holder());
    float result = impl->getStartTime(exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result);
}

static void getStartTimeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    SVGAnimationElementV8Internal::getStartTimeMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void getCurrentTimeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SVGAnimationElement* impl = V8SVGAnimationElement::toImpl(info.Holder());
    v8SetReturnValue(info, impl->getCurrentTime());
}

static void getCurrentTimeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    SVGAnimationElementV8Internal::getCurrentTimeMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void getSimpleDurationMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "getSimpleDuration", "SVGAnimationElement", info.Holder(), info.GetIsolate());
    SVGAnimationElement* impl = V8SVGAnimationElement::toImpl(info.Holder());
    float result = impl->getSimpleDuration(exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result);
}

static void getSimpleDurationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    SVGAnimationElementV8Internal::getSimpleDurationMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void beginElementMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SVGAnimationElement* impl = V8SVGAnimationElement::toImpl(info.Holder());
    impl->beginElement();
}

static void beginElementMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    SVGAnimationElementV8Internal::beginElementMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void beginElementAtMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "beginElementAt", "SVGAnimationElement", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    SVGAnimationElement* impl = V8SVGAnimationElement::toImpl(info.Holder());
    float offset;
    {
        offset = toRestrictedFloat(info.GetIsolate(), info[0], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    impl->beginElementAt(offset);
}

static void beginElementAtMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    SVGAnimationElementV8Internal::beginElementAtMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void endElementMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SVGAnimationElement* impl = V8SVGAnimationElement::toImpl(info.Holder());
    impl->endElement();
}

static void endElementMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    SVGAnimationElementV8Internal::endElementMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void endElementAtMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "endElementAt", "SVGAnimationElement", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    SVGAnimationElement* impl = V8SVGAnimationElement::toImpl(info.Holder());
    float offset;
    {
        offset = toRestrictedFloat(info.GetIsolate(), info[0], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    impl->endElementAt(offset);
}

static void endElementAtMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    SVGAnimationElementV8Internal::endElementAtMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void hasExtensionMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        V8ThrowException::throwException(createMinimumArityTypeErrorForMethod(info.GetIsolate(), "hasExtension", "SVGAnimationElement", 1, info.Length()), info.GetIsolate());
        return;
    }
    SVGAnimationElement* impl = V8SVGAnimationElement::toImpl(info.Holder());
    V8StringResource<> extension;
    {
        extension = info[0];
        if (!extension.prepare())
            return;
    }
    v8SetReturnValueBool(info, impl->hasExtension(extension));
}

static void hasExtensionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::V8SVGAnimationElement_HasExtension_Method);
    SVGAnimationElementV8Internal::hasExtensionMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace SVGAnimationElementV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8SVGAnimationElementAccessors[] = {
    {"targetElement", SVGAnimationElementV8Internal::targetElementAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"onbegin", SVGAnimationElementV8Internal::onbeginAttributeGetterCallback, SVGAnimationElementV8Internal::onbeginAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"onend", SVGAnimationElementV8Internal::onendAttributeGetterCallback, SVGAnimationElementV8Internal::onendAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"onrepeat", SVGAnimationElementV8Internal::onrepeatAttributeGetterCallback, SVGAnimationElementV8Internal::onrepeatAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static const V8DOMConfiguration::MethodConfiguration V8SVGAnimationElementMethods[] = {
    {"getStartTime", SVGAnimationElementV8Internal::getStartTimeMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"getCurrentTime", SVGAnimationElementV8Internal::getCurrentTimeMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"getSimpleDuration", SVGAnimationElementV8Internal::getSimpleDurationMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"beginElement", SVGAnimationElementV8Internal::beginElementMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"beginElementAt", SVGAnimationElementV8Internal::beginElementAtMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"endElement", SVGAnimationElementV8Internal::endElementMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"endElementAt", SVGAnimationElementV8Internal::endElementAtMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"hasExtension", SVGAnimationElementV8Internal::hasExtensionMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
};

static void installV8SVGAnimationElementTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "SVGAnimationElement", V8SVGElement::domTemplate(isolate), V8SVGAnimationElement::internalFieldCount,
        0, 0,
        V8SVGAnimationElementAccessors, WTF_ARRAY_LENGTH(V8SVGAnimationElementAccessors),
        V8SVGAnimationElementMethods, WTF_ARRAY_LENGTH(V8SVGAnimationElementMethods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    if (RuntimeEnabledFeatures::svg1DOMEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessorConfiguration =\
        {"requiredFeatures", SVGAnimationElementV8Internal::requiredFeaturesAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, instanceTemplate, prototypeTemplate, functionTemplate, defaultSignature, accessorConfiguration);
    }
    if (RuntimeEnabledFeatures::svg1DOMEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessorConfiguration =\
        {"requiredExtensions", SVGAnimationElementV8Internal::requiredExtensionsAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, instanceTemplate, prototypeTemplate, functionTemplate, defaultSignature, accessorConfiguration);
    }
    if (RuntimeEnabledFeatures::svg1DOMEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessorConfiguration =\
        {"systemLanguage", SVGAnimationElementV8Internal::systemLanguageAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, instanceTemplate, prototypeTemplate, functionTemplate, defaultSignature, accessorConfiguration);
    }

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Local<v8::FunctionTemplate> V8SVGAnimationElement::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8SVGAnimationElementTemplate);
}

bool V8SVGAnimationElement::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8SVGAnimationElement::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

SVGAnimationElement* V8SVGAnimationElement::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8SVGAnimationElement::refObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<SVGAnimationElement>()->ref();
#endif
}

void V8SVGAnimationElement::derefObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<SVGAnimationElement>()->deref();
#endif
}

} // namespace blink