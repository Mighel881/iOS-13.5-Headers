/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@interface WKWebViewContentProviderRegistry : NSObject {

	HashMap<WTF::String, Class<WKWebViewContentProvider>, WTF::ASCIICaseInsensitiveHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<Class<WKWebViewContentProvider> > >* _contentProviderForMIMEType;
	HashCountedSet<WebKit::WebPageProxy *, WTF::PtrHash<WebKit::WebPageProxy *>, WTF::HashTraits<WebKit::WebPageProxy *> >* _pages;

}
-(id)initWithConfiguration:(id)arg1 ;
-(void)addPage:(WebPageProxy*)arg1 ;
-(void)removePage:(WebPageProxy*)arg1 ;
-(Class)providerForMIMEType:(const String*)arg1 ;
-(void)registerProvider:(Class)arg1 forMIMEType:(const String*)arg2 ;
-(Vector<WTF::String, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>*)_mimeTypesWithCustomContentProviders;
@end
