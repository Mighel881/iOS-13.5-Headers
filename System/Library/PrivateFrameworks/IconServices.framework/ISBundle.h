/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IconServices/IconServices-Structs.h>
@class NSURL;

@interface ISBundle : NSObject {

	CFBundleRef _bundle;

}

@property (assign) CFBundleRef bundle;                    //@synthesize bundle=_bundle - In the implementation block
@property (copy,readonly) NSURL * bundleURL; 
+(id)mainBundle;
+(id)iconsetResourceBundle;
+(id)frameworkBundle;
+(id)iconsetResourceAssetsCatalogURL;
+(id)frameworkLocalizedString:(id)arg1 ;
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 ;
-(id)URLForResource:(id)arg1 withExtension:(id)arg2 ;
-(NSURL *)bundleURL;
-(id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2 ;
-(id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 ;
-(CFBundleRef)bundle;
-(void)setBundle:(CFBundleRef)arg1 ;
-(id)initWithCFBundle:(CFBundleRef)arg1 ;
@end

