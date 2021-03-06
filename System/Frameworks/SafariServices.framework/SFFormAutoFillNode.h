/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <libobjc.A.dylib/WBSFormAutoFillNode.h>

@class WKWebProcessPlugInNodeHandle, NSString;

@interface SFFormAutoFillNode : NSObject <WBSFormAutoFillNode> {

	WKWebProcessPlugInNodeHandle* _nodeHandle;

}

@property (nonatomic,readonly) WKWebProcessPlugInNodeHandle * nodeHandle;              //@synthesize nodeHandle=_nodeHandle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)autoFillNodeWithNodeHandle:(id)arg1 ;
-(WKWebProcessPlugInNodeHandle *)nodeHandle;
-(CGRect)elementBounds;
-(long long)htmlInputElementAutoFillButtonType;
-(long long)htmlInputElementLastAutoFillButtonType;
-(id)initWithNodeHandle:(id)arg1 ;
-(id)initWithJSWrapper:(OpaqueJSValueRef)arg1 inContext:(OpaqueJSContextRef)arg2 ;
-(void)setHTMLInputElementAutofilled:(BOOL)arg1 ;
-(BOOL)isHTMLInputElementUserEdited;
-(BOOL)isHTMLTextAreaElementUserEdited;
-(void)setHTMLInputElementAutoFilledWithAutomaticStrongPassword:(BOOL)arg1 ;
@end

