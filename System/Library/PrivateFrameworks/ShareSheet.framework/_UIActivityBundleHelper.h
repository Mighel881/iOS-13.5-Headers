/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class LSBundleProxy;

@interface _UIActivityBundleHelper : NSObject {

	LSBundleProxy* _bundleProxy;

}

@property (nonatomic,retain) LSBundleProxy * bundleProxy;              //@synthesize bundleProxy=_bundleProxy - In the implementation block
+(id)activityBundleHelperForExtension:(id)arg1 ;
-(id)init;
-(id)debugDescription;
-(id)initWithBundleProxy:(id)arg1 ;
-(void)setBundleProxy:(LSBundleProxy *)arg1 ;
-(LSBundleProxy *)bundleProxy;
-(id)imageForApplicationIconFormat:(int)arg1 activityCategory:(long long)arg2 ;
@end

