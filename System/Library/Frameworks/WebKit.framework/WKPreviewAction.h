/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/UIPreviewAction.h>
#import <libobjc.A.dylib/WKPreviewActionItem.h>

@class NSString;

@interface WKPreviewAction : UIPreviewAction <WKPreviewActionItem> {

	NSString* _identifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(id)actionWithIdentifier:(id)arg1 title:(id)arg2 style:(long long)arg3 handler:(/*^block*/id)arg4 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
@end
