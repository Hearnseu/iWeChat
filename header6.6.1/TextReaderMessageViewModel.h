//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ReaderMessageViewModel.h"

#import "RichTextLayoutDelegate-Protocol.h"

@class NSString;

@interface TextReaderMessageViewModel : ReaderMessageViewModel <RichTextLayoutDelegate>
{
    double m_textViewMaxheight;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (_Bool)shouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(id)arg3;
- (double)textViewMaxheight;
- (struct CGSize)calculateTitleViewSize;
- (double)messageNodeViewHeight;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
