/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WebBookmark, NSString;

@interface _SFFolderPickerItem : NSObject {

	WebBookmark* _bookmark;
	unsigned long long _depth;

}

@property (nonatomic,readonly) WebBookmark * bookmark;                //@synthesize bookmark=_bookmark - In the implementation block
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) unsigned long long depth;              //@synthesize depth=_depth - In the implementation block
-(unsigned long long)depth;
-(NSString *)title;
-(WebBookmark *)bookmark;
-(id)_initWithBookmark:(id)arg1 depth:(unsigned long long)arg2 ;
@end

