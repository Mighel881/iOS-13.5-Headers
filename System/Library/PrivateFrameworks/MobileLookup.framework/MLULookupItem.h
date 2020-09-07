/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MobileLookup.framework/MobileLookup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MobileLookup/MobileLookup-Structs.h>
@class NSURL, NSString, NSArray, NSDictionary, MLULookupItemContent;

@interface MLULookupItem : NSObject {

	NSURL* _url;
	DDResultRef _ddResult;
	NSString* _text;
	NSRange _focusRange;
	NSArray* _attachments;
	unsigned long long _currentAttachmentIndex;
	NSRange _proposedRange;
	BOOL _resolved;
	NSDictionary* _documentProperties;
	MLULookupItemContent* _previewContent;

}

@property (nonatomic,retain) MLULookupItemContent * previewContent;              //@synthesize previewContent=_previewContent - In the implementation block
@property (retain) NSDictionary * documentProperties;                            //@synthesize documentProperties=_documentProperties - In the implementation block
-(void)dealloc;
-(BOOL)resolve;
-(void)commit;
-(id)initWithURL:(id)arg1 dataDetectorsResult:(DDResultRef)arg2 text:(id)arg3 range:(NSRange)arg4 ;
-(id)initWithAttachments:(id)arg1 currentAttachment:(unsigned long long)arg2 ;
-(void)setDocumentProperties:(NSDictionary *)arg1 ;
-(id)viewControllerToPresent;
-(unsigned long long)commitType;
-(void)commitWithTransitionForPreviewViewController:(id)arg1 inViewController:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setPreviewContent:(MLULookupItemContent *)arg1 ;
-(NSDictionary *)documentProperties;
-(BOOL)_resolveURL:(id)arg1 DDResult:(DDResultRef)arg2 focusRange:(NSRange)arg3 ;
-(BOOL)_resolveAttachments:(id)arg1 currentAttachmentIndex:(unsigned long long)arg2 ;
-(BOOL)_resolveText:(id)arg1 focusRange:(NSRange)arg2 ;
-(MLULookupItemContent *)previewContent;
-(id)webUrlToPresent;
-(NSRange)proposedRange;
@end
