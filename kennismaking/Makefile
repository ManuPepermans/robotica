LeftLeast  = KAVL_GET_POINTER(ppLeftLeast);
        }

        /* link out pLeftLeast */
        KAVL_SET_POINTER_NULL(ppLeftLeast, &pLeftLeast->pLeft);

        /* link it in place of the delete node. */
        KAVL_SET_POINTER_NULL(&pLeftLeast->pLeft, &pDeleteNode->pLeft);
        KAVL_SET_POINTER_NULL(&pLeftLeast->pRight, &pDeleteNode->pRight);
        pLeftLeast->uchHeight = pDeleteNode->uchHeight;
        KAVL_SET_POINTER(ppDeleteNode, pLeftLeast);
        AVLStack.aEntries[iStackEntry] = &pLeftLeast->pLeft;
    }
    else
    {
        KAVL_SET_POINTER_NULL(ppDeleteNode, &pDeleteNode->pRight);
        AVLStack.cEntries--;
    }

    KAVL_FN(Rebalance)(SSToDS(&AVLStack));
    return pDeleteNode;
}

#endif
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            