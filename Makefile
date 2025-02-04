NAME ?= libkettle.so

CFLAGS ?= -O2 -g
CPPFLAGS ?= -Werror
LDFLAGS ?=

user_CFLAGS := $(CFLAGS)
user_CPPFLAGS := $(CPPFLAGS)
user_LDFLAGS := $(LDFLAGS)

internal_CFLAGS := -std=gnu11 -fPIC -Wall -Wextra -Wcast-qual -Wshadow -Wvla
internal_CPPFLAGS := -MMD -I include
internal_LDFLAGS := -lm

override CFLAGS += $(internal_CFLAGS)
override CPPFLAGS += $(internal_CPPFLAGS)
override LDFLAGS += $(internal_LDFLAGS)

include sources.mk

OBJECTS := $(SOURCES:%.c=%.o)
DEPENDS := $(SOURCES:%.c=%.d)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) -shared $(CFLAGS) -o $@ $^ $(LDFLAGS)

-include $(DEPENDS)

clean:
	@$(RM) $(OBJECTS) $(DEPENDS)

fclean:
	$(MAKE) clean
	$(RM) $(NAME)

re:
	$(MAKE) clean
	+$(MAKE) all

.PHONY: all clean fclean re
