pack:           $(OBJ)
                $(AR) $(ARFLAGS) $(NAME).a $(OBJ)
by

pack: $(NAME).a

$(NAME).a: $(OBJ)
        $(AR) $(ARFLAGS) $(NAME.a) $(OBJ)
